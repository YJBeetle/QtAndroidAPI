#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::util
{
	class SparseArray : public __JniBaseClass
	{
	public:
		// Fields
		
		SparseArray(QAndroidJniObject obj);
		// Constructors
		SparseArray();
		SparseArray(jint arg0);
		
		// Methods
		void append(jint arg0, jobject arg1);
		void clear();
		QAndroidJniObject clone();
		void _delete(jint arg0);
		jobject get(jint arg0);
		jobject get(jint arg0, jobject arg1);
		jint indexOfKey(jint arg0);
		jint indexOfValue(jobject arg0);
		jint keyAt(jint arg0);
		void put(jint arg0, jobject arg1);
		void remove(jint arg0);
		void removeAt(jint arg0);
		void removeAtRange(jint arg0, jint arg1);
		void setValueAt(jint arg0, jobject arg1);
		jint size();
		jstring toString();
		jobject valueAt(jint arg0);
	};
} // namespace android::util

