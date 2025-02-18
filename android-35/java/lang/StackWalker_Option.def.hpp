#pragma once

#include "./Enum.def.hpp"

class JArray;
class JString;

namespace java::lang
{
	class StackWalker_Option : public java::lang::Enum
	{
	public:
		// Fields
		static java::lang::StackWalker_Option RETAIN_CLASS_REFERENCE();
		static java::lang::StackWalker_Option SHOW_HIDDEN_FRAMES();
		static java::lang::StackWalker_Option SHOW_REFLECT_FRAMES();
		
		// QJniObject forward
		template<typename ...Ts> explicit StackWalker_Option(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		StackWalker_Option(QJniObject obj) : java::lang::Enum(obj) {}
		
		// Constructors
		
		// Methods
		static java::lang::StackWalker_Option valueOf(JString arg0);
		static JArray values();
	};
} // namespace java::lang

