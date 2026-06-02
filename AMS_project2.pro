QT += widgets
QT += network
CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    admin_dashboard.cpp \
    forgetpasswordbutton.cpp \
    main.cpp \
    mainwindow.cpp \
    managestudent.cpp \
    mycourses.cpp \
    student_attendance.cpp \
    studentportal.cpp

HEADERS += \
    admin_dashboard.h \
    forgetpasswordbutton.h \
    mainwindow.h \
    managestudent.h \
    mycourses.h \
    student_attendance.h \
    studentportal.h

FORMS += \
    admin_dashboard.ui \
    forgetpasswordbutton.ui \
    mainwindow.ui \
    managestudent.ui \
    mycourses.ui \
    student_attendance.ui \
    studentportal.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    logos.qrc
