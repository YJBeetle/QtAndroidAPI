#pragma once

#include "../../../__JniBaseClass.hpp"


namespace java::util::stream
{
	class StreamSupport : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit StreamSupport(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		StreamSupport(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject doubleStream(__JniBaseClass arg0, jboolean arg1);
		static QAndroidJniObject doubleStream(__JniBaseClass arg0, jint arg1, jboolean arg2);
		static QAndroidJniObject intStream(__JniBaseClass arg0, jboolean arg1);
		static QAndroidJniObject intStream(__JniBaseClass arg0, jint arg1, jboolean arg2);
		static QAndroidJniObject longStream(__JniBaseClass arg0, jboolean arg1);
		static QAndroidJniObject longStream(__JniBaseClass arg0, jint arg1, jboolean arg2);
		static QAndroidJniObject stream(__JniBaseClass arg0, jboolean arg1);
		static QAndroidJniObject stream(__JniBaseClass arg0, jint arg1, jboolean arg2);
	};
} // namespace java::util::stream

