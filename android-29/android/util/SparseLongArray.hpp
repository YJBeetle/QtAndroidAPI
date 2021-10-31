#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::util
{
	class SparseLongArray : public __JniBaseClass
	{
	public:
		// Fields
		
		SparseLongArray(QAndroidJniObject obj);
		// Constructors
		SparseLongArray();
		SparseLongArray(jint arg0);
		
		// Methods
		void append(jint arg0, jlong arg1);
		void clear();
		QAndroidJniObject clone();
		void _delete(jint arg0);
		jlong get(jint arg0);
		jlong get(jint arg0, jlong arg1);
		jint indexOfKey(jint arg0);
		jint indexOfValue(jlong arg0);
		jint keyAt(jint arg0);
		void put(jint arg0, jlong arg1);
		void removeAt(jint arg0);
		jint size();
		jstring toString();
		jlong valueAt(jint arg0);
	};
} // namespace android::util

