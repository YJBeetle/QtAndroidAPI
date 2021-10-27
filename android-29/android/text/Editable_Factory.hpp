#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::text
{
	class Editable_Factory : public __JniBaseClass
	{
	public:
		// Fields
		
		Editable_Factory(QAndroidJniObject obj);
		// Constructors
		Editable_Factory();
		
		// Methods
		static QAndroidJniObject getInstance();
		QAndroidJniObject newEditable(jstring arg0);
		QAndroidJniObject newEditable(const QString &arg0);
	};
} // namespace android::text

