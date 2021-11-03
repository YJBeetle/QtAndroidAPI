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
		void append(jlong arg0, JObject arg1) const;
		void clear() const;
		android::util::LongSparseArray clone() const;
		void _delete(jlong arg0) const;
		JObject get(jlong arg0) const;
		JObject get(jlong arg0, JObject arg1) const;
		jint indexOfKey(jlong arg0) const;
		jint indexOfValue(JObject arg0) const;
		jlong keyAt(jint arg0) const;
		void put(jlong arg0, JObject arg1) const;
		void remove(jlong arg0) const;
		void removeAt(jint arg0) const;
		void setValueAt(jint arg0, JObject arg1) const;
		jint size() const;
		JString toString() const;
		JObject valueAt(jint arg0) const;
	};
} // namespace android::util

