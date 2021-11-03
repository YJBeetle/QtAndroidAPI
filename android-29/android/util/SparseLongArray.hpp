#pragma once

#include "../../JObject.hpp"

class JObject;
class JString;

namespace android::util
{
	class SparseLongArray : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SparseLongArray(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SparseLongArray(QJniObject obj);
		
		// Constructors
		SparseLongArray();
		SparseLongArray(jint arg0);
		
		// Methods
		void append(jint arg0, jlong arg1);
		void clear();
		android::util::SparseLongArray clone();
		void _delete(jint arg0);
		jlong get(jint arg0);
		jlong get(jint arg0, jlong arg1);
		jint indexOfKey(jint arg0);
		jint indexOfValue(jlong arg0);
		jint keyAt(jint arg0);
		void put(jint arg0, jlong arg1);
		void removeAt(jint arg0);
		jint size();
		JString toString();
		jlong valueAt(jint arg0);
	};
} // namespace android::util

