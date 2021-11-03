#pragma once

#include "../../JObject.hpp"


namespace java::util
{
	class Objects : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Objects(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Objects(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static jint checkFromIndexSize(jint arg0, jint arg1, jint arg2);
		static jlong checkFromIndexSize(jlong arg0, jlong arg1, jlong arg2);
		static jint checkFromToIndex(jint arg0, jint arg1, jint arg2);
		static jlong checkFromToIndex(jlong arg0, jlong arg1, jlong arg2);
		static jint checkIndex(jint arg0, jint arg1);
		static jlong checkIndex(jlong arg0, jlong arg1);
		static jint compare(jobject arg0, jobject arg1, JObject arg2);
		static jboolean deepEquals(jobject arg0, jobject arg1);
		static jboolean equals(jobject arg0, jobject arg1);
		static jint hash(jobjectArray arg0);
		static jint hashCode(jobject arg0);
		static jboolean isNull(jobject arg0);
		static jboolean nonNull(jobject arg0);
		static jobject requireNonNull(jobject arg0);
		static jobject requireNonNull(jobject arg0, jstring arg1);
		static jobject requireNonNull(jobject arg0, JObject arg1);
		static jobject requireNonNullElse(jobject arg0, jobject arg1);
		static jobject requireNonNullElseGet(jobject arg0, JObject arg1);
		static jstring toString(jobject arg0);
		static jstring toString(jobject arg0, jstring arg1);
	};
} // namespace java::util

