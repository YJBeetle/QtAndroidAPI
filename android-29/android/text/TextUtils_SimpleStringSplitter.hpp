#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::text
{
	class TextUtils_SimpleStringSplitter : public __JniBaseClass
	{
	public:
		// Fields
		
		TextUtils_SimpleStringSplitter(QAndroidJniObject obj);
		// Constructors
		TextUtils_SimpleStringSplitter(jchar &arg0);
		TextUtils_SimpleStringSplitter() = default;
		
		// Methods
		jboolean hasNext();
		QAndroidJniObject iterator();
		jstring next();
		void remove();
		void setString(jstring arg0);
		void setString(const QString &arg0);
	};
} // namespace android::text

