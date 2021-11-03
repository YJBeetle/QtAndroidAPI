#pragma once

#include "../../JObject.hpp"
#include "./Property.hpp"

namespace java::lang
{
	class Integer;
}

namespace android::util
{
	class IntProperty : public android::util::Property
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit IntProperty(const char *className, const char *sig, Ts...agv) : android::util::Property(className, sig, std::forward<Ts>(agv)...) {}
		IntProperty(QAndroidJniObject obj);
		
		// Constructors
		IntProperty(jstring arg0);
		
		// Methods
		void set(jobject arg0, java::lang::Integer arg1);
		void set(jobject arg0, jobject arg1);
		void setValue(jobject arg0, jint arg1);
	};
} // namespace android::util

