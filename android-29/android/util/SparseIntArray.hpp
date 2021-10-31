#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::util
{
	class SparseIntArray : public __JniBaseClass
	{
	public:
		// Fields
		
		SparseIntArray(QAndroidJniObject obj);
		// Constructors
		SparseIntArray();
		SparseIntArray(jint arg0);
		
		// Methods
		void append(jint arg0, jint arg1);
		void clear();
		QAndroidJniObject clone();
		void _delete(jint arg0);
		jint get(jint arg0);
		jint get(jint arg0, jint arg1);
		jint indexOfKey(jint arg0);
		jint indexOfValue(jint arg0);
		jint keyAt(jint arg0);
		void put(jint arg0, jint arg1);
		void removeAt(jint arg0);
		void setValueAt(jint arg0, jint arg1);
		jint size();
		jstring toString();
		jint valueAt(jint arg0);
	};
} // namespace android::util

