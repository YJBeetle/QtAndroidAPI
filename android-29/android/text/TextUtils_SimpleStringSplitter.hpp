#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::text
{
	class TextUtils_SimpleStringSplitter : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TextUtils_SimpleStringSplitter(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		TextUtils_SimpleStringSplitter(QAndroidJniObject obj);
		
		// Constructors
		TextUtils_SimpleStringSplitter(jchar arg0);
		
		// Methods
		jboolean hasNext();
		QAndroidJniObject iterator();
		jstring next();
		void remove();
		void setString(jstring arg0);
	};
} // namespace android::text

