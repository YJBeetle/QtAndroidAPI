#pragma once

#include "../../JObject.hpp"

class JClass;
class JObject;
namespace java::lang
{
	class StackWalker_Option;
}
namespace java::util
{
	class EnumSet;
}

namespace java::lang
{
	class StackWalker : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit StackWalker(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		StackWalker(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static java::lang::StackWalker getInstance();
		static java::lang::StackWalker getInstance(java::lang::StackWalker_Option arg0);
		static java::lang::StackWalker getInstance(JObject arg0);
		static java::lang::StackWalker getInstance(JObject arg0, jint arg1);
		void forEach(JObject arg0) const;
		JClass getCallerClass() const;
		JObject walk(JObject arg0) const;
	};
} // namespace java::lang

