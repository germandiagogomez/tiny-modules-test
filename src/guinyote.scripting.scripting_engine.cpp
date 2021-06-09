export module guinyote.scripting:scripting_engine;
import <iostream>;

namespace Guinyote::Scripting {

export class ScriptingEngine {
public:
    friend std::ostream & operator<<(std::ostream & out, ScriptingEngine const&);
};


std::ostream & operator<<(std::ostream & out, ScriptingEngine const&) {
    out << "Hello, Scripting!";
    return out;
}


}
