#pragma once

#include "../../__JniBaseClass.hpp"
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
		
		IntProperty(QAndroidJniObject obj);
		// Constructors
		IntProperty(jstring &arg0);
		IntProperty(const QString &arg0);
		IntProperty() = default;
		
		// Methods
		void set(jobject arg0, java::lang::Integer arg1);
		void set(jobject arg0, jobject arg1);
		void setValue(jobject arg0, jint arg1);
	};
} // namespace android::util

