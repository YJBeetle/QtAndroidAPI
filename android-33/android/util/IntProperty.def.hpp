#pragma once

#include "./Property.def.hpp"

namespace java::lang
{
	class Integer;
}
class JObject;
class JString;

namespace android::util
{
	class IntProperty : public android::util::Property
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit IntProperty(const char *className, const char *sig, Ts...agv) : android::util::Property(className, sig, std::forward<Ts>(agv)...) {}
		IntProperty(QAndroidJniObject obj) : android::util::Property(obj) {}
		
		// Constructors
		IntProperty(JString arg0);
		
		// Methods
		void set(JObject arg0, java::lang::Integer arg1) const;
		void set(JObject arg0, JObject arg1) const;
		void setValue(JObject arg0, jint arg1) const;
	};
} // namespace android::util

