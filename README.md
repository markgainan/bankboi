# Project 2: Banking App - CS210 
## My banking app for CS210 project 2. Written in c++

**Summarize the project and what problem it was solving.**
    - This was an application used to show bank customers the amount they could save using our bank and gaining compound interest. With or without monthly deposits.

**What did you do particularly well?**
    - My code was broken up in to separate functions, which made the code very easy to understand. The code was commented properly so that another programmer could clone and add to it easily if they wanted.

**Where could you enhance your code? How would these improvements make your code more efficient, secure, and so on?**
    - I could separate the code in to separate files and classes. I could enhance security by using private fields.

**Did you find writing any piece of this code challenging, and how did you overcome this? What tools and/or resources are you adding to your support network?**
    - I found that the math segment of the code was challenging. I overcame this by using similar inputs that were shown in the project documentation. I also looked up some math resources to learn about compound interest. Youtube and github are great resources for solving code problems by either reading other code or seeing how a certain task is executed in a given language.

**What skills from this project will be particularly transferable to other projects and/or course work?**
    - Learning to take input from a user, and feed that to a function and output relevant reporting will be very useful for almost any project.
    
**How did you make this program maintainable, readable, and adaptable?**
    - I made it maintainable by having nicely formatted code. My code is readable because I used proper commenting and naming conventions. The code is adaptable because I did things like: 
    ```
        string appTitle = " Data Input ";
    ```
    as well as
    ```
    string spacer = string(17, ' ');
    ```
    where the ```appTitle``` variable could be used in many places, and I'd only need to change it in one place. If a product manager gave me instructions to change the spacing, I could just edit the spacer variable to their liking. 
    Another area where my code is adaptable is the  ```printReportHeader()```function. This function accepts a choice argument. So additional variations could be added to the function easily. Example: a version 'c' where a monthly deduction is taken out for a maintenance fee.



[Link to my main github profile](https://www.github.com/markgainan)

