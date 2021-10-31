#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::webkit
{
	class WebIconDatabase : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit WebIconDatabase(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		WebIconDatabase(QAndroidJniObject obj);
		
		// Constructors
		WebIconDatabase();
		
		// Methods
		static QAndroidJniObject getInstance();
		void close();
		void open(jstring arg0);
		void releaseIconForPageUrl(jstring arg0);
		void removeAllIcons();
		void requestIconForPageUrl(jstring arg0, __JniBaseClass arg1);
		void retainIconForPageUrl(jstring arg0);
	};
} // namespace android::webkit

