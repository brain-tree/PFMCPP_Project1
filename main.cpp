#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates camelCase


//  1)
//  Noun: automobile
//  action 1: the automobile accelerates
automobile.accelerate();
//  action 2: the automobile brakes
automobile.brake();
//  action 3: the automobile idles
automobile.idle();
//  2)
//  Noun: ball
//  action 1: the ball bounces
ball.bounce();
//  action 2: the ball rolls
ball.roll();
//  action 3: the ball falls
ball.fall();
//  3)
//  Noun: wrench
//  action 1: the wrench cranks
wrench.crank();
//  action 2: the wrench twists
wrench.twist();
//  action 3: the wrench tightens
wrench.tighten();
//  4)
//  Noun: pencil
//  action 1: the pencil writes
pencil.write();
//  action 2: the pencil draws
pencil.draw();
//  action 3: the pencil erases
pencil.erase();
//  5)
//  Noun: leg
//  action 1: the leg runs 
leg.run();
//  action 2: the leg jumps
leg.jump();
//  action 3: the leg stretches
leg.stretch();
//  6)
//  Noun: synthesizer
//  action 1: the synthesizer emits sound
synthesizer.emitSound();
//  action 2: the synthesizer shapes tones
synthesizer.shapeTone();
//  action 3: the synthesizer produces noise
synthesizer.produceNoise();
//  7)
//  Noun: bicycle
//  action 1: the bicycle travels
bicycle.travel();
//  action 2: the bicycle turns
bicycle.turn();
//  action 3: the bicycle stops
bicycle.stop();
//  8)
//  Noun: stapler
//  action 1: the stapler staples
stapler.staple();
//  action 2: the stapler gets stolen
stapler.getStolen();
//  action 3: the stapler gets the office burnt down
stapler.getOfficeBurntDown();
//  9)
//  Noun: crane
//  action 1: the crane lifts
crane.lift();
//  action 2: the crane moves
crane.move();
//  action 3: the crane revolves
crane.revolve();
//  10)
//  Noun: Parking lot
//  action 1: the parking lot holds cars
parkingLot.holdCars();
//  action 2: the parking lot charges money
parkingLot.chargeMoney();
//  action 3: the parking lot keeps time
parkingLot.keepTime();


#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
