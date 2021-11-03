#pragma once

#include "../../JObject.hpp"


namespace android::util
{
	class SparseBooleanArray : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SparseBooleanArray(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SparseBooleanArray(QAndroidJniObject obj);
		
		// Constructors
		SparseBooleanArray();
		SparseBooleanArray(jint arg0);
		
		// Methods
		void append(jint arg0, jboolean arg1);
		void clear();
		android::util::SparseBooleanArray clone();
		void _delete(jint arg0);
		jboolean equals(jobject arg0);
		jboolean get(jint arg0);
		jboolean get(jint arg0, jboolean arg1);
		jint hashCode();
		jint indexOfKey(jint arg0);
		jint indexOfValue(jboolean arg0);
		jint keyAt(jint arg0);
		void put(jint arg0, jboolean arg1);
		void removeAt(jint arg0);
		jint size();
		jstring toString();
		jboolean valueAt(jint arg0);
	};
} // namespace android::util

