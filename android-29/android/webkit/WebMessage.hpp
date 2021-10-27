#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::webkit
{
	class WebMessage : public __JniBaseClass
	{
	public:
		// Fields
		
		WebMessage(QAndroidJniObject obj);
		// Constructors
		WebMessage(jstring &arg0);
		WebMessage(const QString &arg0);
		WebMessage(jstring &arg0, jarray &arg1);
		WebMessage(const QString &arg0, jarray &arg1);
		WebMessage() = default;
		
		// Methods
		jstring getData();
		jarray getPorts();
	};
} // namespace android::webkit

