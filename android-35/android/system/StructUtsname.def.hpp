#pragma once

#include "../../JObject.hpp"

class JString;

namespace android::system
{
	class StructUtsname : public JObject
	{
	public:
		// Fields
		JString machine();
		JString nodename();
		JString release();
		JString sysname();
		JString version();
		
		// QJniObject forward
		template<typename ...Ts> explicit StructUtsname(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		StructUtsname(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		StructUtsname(JString arg0, JString arg1, JString arg2, JString arg3, JString arg4);
		
		// Methods
		JString toString() const;
	};
} // namespace android::system

