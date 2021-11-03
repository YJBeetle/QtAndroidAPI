#pragma once

#include "../../../JObject.hpp"

class JString;
namespace java::time
{
	class MonthDay;
}

namespace android::app::admin
{
	class FreezePeriod : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit FreezePeriod(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		FreezePeriod(QAndroidJniObject obj);
		
		// Constructors
		FreezePeriod(java::time::MonthDay arg0, java::time::MonthDay arg1);
		
		// Methods
		java::time::MonthDay getEnd();
		java::time::MonthDay getStart();
		JString toString();
	};
} // namespace android::app::admin

