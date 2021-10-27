#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::view::inspector
{
	class IntFlagMapping : public __JniBaseClass
	{
	public:
		// Fields
		
		IntFlagMapping(QAndroidJniObject obj);
		// Constructors
		IntFlagMapping();
		
		// Methods
		void add(jint arg0, jint arg1, jstring arg2);
		void add(jint arg0, jint arg1, const QString &arg2);
		QAndroidJniObject get(jint arg0);
	};
} // namespace android::view::inspector

