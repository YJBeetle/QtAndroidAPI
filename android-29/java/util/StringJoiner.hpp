#pragma once

#include "../../__JniBaseClass.hpp"


namespace java::util
{
	class StringJoiner : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit StringJoiner(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		StringJoiner(QAndroidJniObject obj);
		
		// Constructors
		StringJoiner(jstring arg0);
		StringJoiner(jstring arg0, jstring arg1, jstring arg2);
		
		// Methods
		QAndroidJniObject add(jstring arg0);
		jint length();
		QAndroidJniObject merge(java::util::StringJoiner arg0);
		QAndroidJniObject setEmptyValue(jstring arg0);
		jstring toString();
	};
} // namespace java::util

