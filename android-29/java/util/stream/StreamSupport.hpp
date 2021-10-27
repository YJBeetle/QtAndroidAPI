#pragma once

#include "../../../__JniBaseClass.hpp"


namespace java::util::stream
{
	class StreamSupport : public __JniBaseClass
	{
	public:
		// Fields
		
		StreamSupport(QAndroidJniObject obj);
		// Constructors
		StreamSupport() = default;
		
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

