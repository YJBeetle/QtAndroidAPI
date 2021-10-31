#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Enum.hpp"


namespace android::util
{
	class JsonToken : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject BEGIN_ARRAY();
		static QAndroidJniObject BEGIN_OBJECT();
		static QAndroidJniObject BOOLEAN();
		static QAndroidJniObject END_ARRAY();
		static QAndroidJniObject END_DOCUMENT();
		static QAndroidJniObject END_OBJECT();
		static QAndroidJniObject NAME();
		static QAndroidJniObject _NULL();
		static QAndroidJniObject NUMBER();
		static QAndroidJniObject STRING();
		
		JsonToken(QAndroidJniObject obj);
		// Constructors
		JsonToken() = default;
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::util

