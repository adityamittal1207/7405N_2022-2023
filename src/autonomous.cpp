#include "main.h"
#include "lib/Robot.h"

void autonomous() {
    Robot::threading.start("odometry", Robot::odom_thread);
    Robot::threading.start("flywheel", Robot::flywheel_thread);
    Robot::threading.start("display", Robot::display_thread);
    Robot::threading.start("controller", Robot::controller_thread);

//    awp();
    match1();
}

void awp() {
    Robot::flywheel.set_velocity(3200);
    Robot::drive.move(30, 0);
    pros::delay(200);
    Robot::INT1 = 120;
    Robot::INT2 = 120;
    pros::delay(180);
    Robot::INT1 = 0;
    Robot::INT2 = 0;

    Robot::drive.move(0, 0);

    Robot::power.set_value(8, 0.001, 0, 0, 0.0);
    Robot::drive.move_to(Pose(0, -2), 0.4, 5); // 0, -5

    Robot::turn.set_value(1.4, 0.001, 0.0, 6, 0.0);
    Robot::drive.rotate_to(125, 1);

    pros::delay(500);

    Robot::INT1 = 127;
    Robot::INT2 = 127;

    Robot::power.set_value(6.9, 0.00001, 0, 5, 10);
    Robot::turn.set_value(1.35, 0.001, 0.0, 6, 0.0);
    Robot::drive.move_to(Pose(33.1, -28.8), 3, 20, 70); // 0, -5

    Robot::turn.set_value(2, 0.001, 0.0, 6, 0.0);
    Robot::drive.rotate_to(135, 1);

    Robot::power.set_value(6.9, 0.00001, 0, 5, 10);
    Robot::turn.set_value(1.35, 0.001, 0.0, 6, 0.0);
    Robot::drive.move_to(Pose(58.4, -55.5), 3, 20, 70); // 0, -5

    pros::delay(500);
    Robot::turn.set_value(1.75, 0.001, 0.0, 6, 0.0);
    Robot::drive.rotate_to(220, 1);

//    while(!flywheel.is_settlted)



    pros::delay(750);
    Robot::FLYPIST.set_value(true);
    pros::delay(250);
    Robot::FLYPIST.set_value(false);

    pros::delay(750);
    Robot::FLYPIST.set_value(true);
    pros::delay(250);
    Robot::FLYPIST.set_value(false);

    pros::delay(750);
    Robot::FLYPIST.set_value(true);
    pros::delay(250);
    Robot::FLYPIST.set_value(false);

    Robot::turn.set_value(1.4, 0.001, 0.0, 6, 0.0);
    Robot::drive.rotate_to(135, 1);

    Robot::power.set_value(6.9, 0.00001, 0, 5, 10);
    Robot::turn.set_value(1.35, 0.001, 0.0, 6, 0.0);
    Robot::drive.move_to(Pose(103.8, -100.2), 3, 10, 70); // 0, -5


    Robot::turn.set_value(2, 0.001, 0.0, 6, 0.0);
    Robot::drive.rotate_to(90, 1);

    Robot::drive.move(60, 0);
    pros::delay(200);
    Robot::INT1 = 120;
    Robot::INT2 = 120;
    pros::delay(180);
    Robot::INT1 = 0;
    Robot::INT2 = 0;
    Robot::drive.move(0, 0);

    Robot::power.set_value(6.9, 0.00001, 0, 5, 10);
    Robot::turn.set_value(1.35, 0.001, 0.0, 6, 0.0);
    Robot::drive.move_to(Pose(104.2, -98.1), 3, 20, 70); // 0, -5





}

void match1() {
    Robot::flywheel.set_velocity(2850);
    Robot::drive.move(30, 0);
    pros::delay(200);
    Robot::INT1 = 120;
    Robot::INT2 = 120;
    pros::delay(220);
    Robot::INT1 = 0;
    Robot::INT2 = 0;

    Robot::drive.move(0, 0);

    Robot::power.set_value(8, 0.001, 0, 0, 0.0);
    Robot::drive.move_to(Pose(0, -5), 0.4, 5); // 0, -5

    Robot::turn.set_value(1.35, 0.001, 0.0, 6, 0.0);
    Robot::drive.rotate_to(164, 1);

    pros::delay(1000);
    Robot::FLYPIST.set_value(true);
    pros::delay(250);
    Robot::FLYPIST.set_value(false);

    pros::delay(1000);
    Robot::FLYPIST.set_value(true);
    pros::delay(150);
    Robot::FLYPIST.set_value(false);
    pros::delay(300);

    Robot::turn.set_value(1.5, 0.001, 0.0, 6, 0.0);
    Robot::drive.rotate_to(90, 1);

    Robot::power.set_value(6.9, 0.00001, 0, 5, 10);
    Robot::drive.move_to(Pose(-11.3, -12.2), 3, 20, 80); // 0, -5

    Robot::turn.set_value(1.9, 0.001, 0.0, 6, 0.0);
    Robot::drive.rotate_to(135, 1);

    pros::delay(250);

    Robot::INT1 = 120;
    Robot::INT2 = 120;

    Robot::power.set_value(6.9, 0.00001, 0, 5, 10);
    Robot::turn.set_value(0.0, 0.0, 0.0, 0.0, 0.0);
    Robot::drive.move_to(Pose(-1.6, -28.4), 3, 20, 40); // 0, -5

    pros::delay(500);

    Robot::power.set_value(6.9, 0.00001, 0, 5, 10);
    Robot::turn.set_value(0.0, 0.0, 0.0, 0.0, 0.0);
    Robot::drive.move_to(Pose(-4.8, -23.7), 3, 20, 40); // 0, -5

    Robot::turn.set_value(2.3, 0.001, 0.0, 6, 0.0);
    Robot::drive.rotate_to(160, 1);

    pros::delay(1000);
    Robot::FLYPIST.set_value(true);
    pros::delay(250);
    Robot::FLYPIST.set_value(false);

    pros::delay(1000);
    Robot::FLYPIST.set_value(true);
    pros::delay(150);
    Robot::FLYPIST.set_value(false);
    pros::delay(300);
}

//void match1() {
//
//    Robot::flywheel.set_velocity(3000);
//    Robot::drive.move(30, 0);
//    pros::delay(200);
//    Robot::INT1 = 120;
//    Robot::INT2 = 120;
//    pros::delay(180);
//    Robot::INT1 = 0;
//    Robot::INT2 = 0;
//
//    Robot::drive.move(0, 0);
//
//    Robot::power.set_value(8, 0.001, 0, 0, 0.0);
//    Robot::drive.move_to(Pose(0, -5), 0.4, 5); // 0, -5
//
//    Robot::turn.set_value(1.5, 0.001, 0.0, 6, 0.0);
//    Robot::drive.rotate_to(-90, 1);
//
//    Robot::power.set_value(6.9, 0.00001, 0, 5, 10);
//    Robot::turn.set_value(1.5, 0.001, 0.0, 6, 0.0);
//    Robot::drive.move_to(Pose(-44.3, -14.3), 3, 20, 90); // 0, -5
//
//    Robot::turn.set_value(1.7, 0.001, 0.0, 6, 0.0);
//    Robot::drive.rotate_to(-180, 0.5);
//
//    Robot::power.set_value(6.9, 0.00001, 0, 5, 10);
//    Robot::turn.set_value(1.35, 0.001, 0.0, 6, 0.0);
//    Robot::drive.move_to(Pose(-39.9, -50.0), 5, 20, 90); // 0, -5
//

//    pros::delay(200);
//    Robot::power.set_value(6.9, 0.00001, 0, 5, 10);
//    Robot::turn.set_value(1.5, 0.001, 0.0, 6, 0.0);
//    Robot::drive.move_to(Pose(-39.9, -50.0), 3, 20, 70); // 0, -5
//
//    Robot::power.set_value(6.9, 0.00001, 0, 5, 10);
//    Robot::turn.set_value(1.35, 0.001, 0.0, 6, 0.0);
//    Robot::drive.move_to(Pose(-35.7, -54.9), 3, 20, 70); // 0, -5


//    Robot::turn.set_value(1.4, 0.001, 0.0, 6, 0.0);
//    Robot::drive.rotate_to(-121, 1);
//
//    Robot::INT1 = 127;
//    Robot::INT2 = 127;
//

//
//    Robot::power.set_value(6.9, 0.00001, 0, 5, 10);
//    Robot::turn.set_value(1.35, 0.001, 0.0, 6, 0.0);
//    Robot::drive.move_to(Pose(-50.9, -49.9), 3, 20, 70);
//
//    Robot::turn.set_value(1.4, 0.001, 0.0, 6, 0.0);
//    Robot::drive.rotate_to(-231, 1);
//
//    Robot::power.set_value(6.9, 0.00001, 0, 5, 10);
//    Robot::turn.set_value(1.45, 0.001, 0.0, 6, 0.0);
//    Robot::drive.move_to(Pose(-39.1, -49.7), 3, 20, 70);
    //-50.9 -49.9
    //231
//
//
//    while(!Robot::flywheel.is_settled()) { pros::delay(5);}
//    Robot::FLYPIST.set_value(true);
//    pros::delay(250);
//    Robot::FLYPIST.set_value(false);
//
//    while(!Robot::flywheel.is_settled()) { pros::delay(5);}
//    pros::delay(150);
//    Robot::FLYPIST.set_value(true);
//    pros::delay(150);
//    Robot::FLYPIST.set_value(false);
//    pros::delay(300);
//
//    Robot::turn.set_value(1.45, 0.001, 0.0, 6, 0.0);
//    Robot::drive.rotate_to(90, 1);
//
//    Robot::power.set_value(6.9, 0.00001, 0, 5, 10);
//    Robot::turn.set_value(1.35, 0.001, 0.0, 6, 0.0);
//    Robot::drive.move_to(Pose(-14, -14), 3, 30, 80); // 0, -5
//
//    Robot::turn.set_value(2, 0.001, 0.0, 6, 0.0);
//    Robot::drive.rotate_to(135, 1);
//
//    pros::delay(500);
//
//    Robot::INT1 = 127;
//    Robot::INT2 = 127;
//
//    Robot::power.set_value(6.9, 0.00001, 0, 5, 10);
//    Robot::turn.set_value(1.35, 0.001, 0.0, 6, 0.0);
//    Robot::drive.move_to(Pose(-5, -30), 3, 20, 30); // 0, -5
//
//    pros::delay(1200);
//
//    Robot::power.set_value(6.9, 0.00001, 0, 5, 10);
//    Robot::turn.set_value(1.35, 0.001, 0.0, 6, 0.0);
//    Robot::drive.move_to(Pose(-9.8, -25.3), 3, 10); // 0, -5
//
//    Robot::turn.set_value(2, 0.001, 0.0, 6, 0.0);
//    Robot::drive.rotate_to(155, 1);
//
//    while(!Robot::flywheel.is_settled()) { pros::delay(5); }
//    Robot::FLYPIST.set_value(true);
//    pros::delay(150);
//    Robot::FLYPIST.set_value(false);
//
//    while(!Robot::flywheel.is_settled()) { pros::delay(5); }
//    Robot::FLYPIST.set_value(true);
//    pros::delay(150);
//    Robot::FLYPIST.set_value(false);
//
//    while(!Robot::flywheel.is_settled()) { pros::delay(5); }
//    Robot::FLYPIST.set_value(true);
//    pros::delay(150);
//    Robot::FLYPIST.set_value(false);
//}