#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Property.hpp"

namespace java::lang
{
	class Float;
}

namespace android::util
{
	class FloatProperty : public android::util::Property
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit FloatProperty(const char *className, const char *sig, Ts...agv) : android::util::Property(className, sig, std::forward<Ts>(agv)...) {}
		FloatProperty(QAndroidJniObject obj);
		
		// Constructors
		FloatProperty(jstring arg0);
		
		// Methods
		void set(jobject arg0, java::lang::Float arg1);
		void set(jobject arg0, jobject arg1);
		void setValue(jobject arg0, jfloat arg1);
	};
} // namespace android::util

