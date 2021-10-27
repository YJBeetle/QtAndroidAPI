#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::webkit
{
	class WebIconDatabase : public __JniBaseClass
	{
	public:
		// Fields
		
		WebIconDatabase(QAndroidJniObject obj);
		// Constructors
		WebIconDatabase();
		
		// Methods
		static QAndroidJniObject getInstance();
		void close();
		void open(jstring arg0);
		void open(const QString &arg0);
		void releaseIconForPageUrl(jstring arg0);
		void releaseIconForPageUrl(const QString &arg0);
		void removeAllIcons();
		void requestIconForPageUrl(jstring arg0, __JniBaseClass arg1);
		void requestIconForPageUrl(const QString &arg0, __JniBaseClass arg1);
		void retainIconForPageUrl(jstring arg0);
		void retainIconForPageUrl(const QString &arg0);
	};
} // namespace android::webkit

