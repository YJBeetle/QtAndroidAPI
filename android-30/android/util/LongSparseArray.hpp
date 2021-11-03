#pragma once

#include "../../JObject.hpp"

class JObject;
class JString;

namespace android::util
{
	class LongSparseArray : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit LongSparseArray(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		LongSparseArray(QJniObject obj);
		
		// Constructors
		LongSparseArray();
		LongSparseArray(jint arg0);
		
		// Methods
		void append(jlong arg0, JObject arg1);
		void clear();
		android::util::LongSparseArray clone();
		void _delete(jlong arg0);
		JObject get(jlong arg0);
		JObject get(jlong arg0, JObject arg1);
		jint indexOfKey(jlong arg0);
		jint indexOfValue(JObject arg0);
		jlong keyAt(jint arg0);
		void put(jlong arg0, JObject arg1);
		void remove(jlong arg0);
		void removeAt(jint arg0);
		void setValueAt(jint arg0, JObject arg1);
		jint size();
		JString toString();
		JObject valueAt(jint arg0);
	};
} // namespace android::util

