SELECT E.Name AS Employee FROM Employee E LEFT JOIN Employee M ON (M.Id = E.ManagerId) WHERE E.ManagerID IS NOT NULL AND E.Salary > M.Salary
