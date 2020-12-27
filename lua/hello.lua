HelloWorld = {
    run = function()
        io.write("Hello, ", HelloWorld.get_name(), "\n")
    end,

    get_name = function()
        repeat
            io.write("Please enter your name: ")
            name = io.read()
        until name ~= ""
        return name
    end
}


h = HelloWorld
h.run()
