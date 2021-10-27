#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::text
{
	class Spannable_Factory : public __JniBaseClass
	{
	public:
		// Fields
		
		Spannable_Factory(QAndroidJniObject obj);
		// Constructors
		Spannable_Factory();
		
		// Methods
		static QAndroidJniObject getInstance();
		QAndroidJniObject newSpannable(jstring arg0);
		QAndroidJniObject newSpannable(const QString &arg0);
	};
} // namespace android::text

