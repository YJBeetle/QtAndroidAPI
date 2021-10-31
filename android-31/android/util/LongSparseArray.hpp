#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::util
{
	class LongSparseArray : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit LongSparseArray(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		LongSparseArray(QAndroidJniObject obj);
		
		// Constructors
		LongSparseArray();
		LongSparseArray(jint arg0);
		
		// Methods
		void append(jlong arg0, jobject arg1);
		void clear();
		android::util::LongSparseArray clone();
		void _delete(jlong arg0);
		jobject get(jlong arg0);
		jobject get(jlong arg0, jobject arg1);
		jint indexOfKey(jlong arg0);
		jint indexOfValue(jobject arg0);
		jlong keyAt(jint arg0);
		void put(jlong arg0, jobject arg1);
		void remove(jlong arg0);
		void removeAt(jint arg0);
		void setValueAt(jint arg0, jobject arg1);
		jint size();
		jstring toString();
		jobject valueAt(jint arg0);
	};
} // namespace android::util
