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
		void append(jint arg0, jlong arg1) const;
		void clear() const;
		android::util::SparseLongArray clone() const;
		void _delete(jint arg0) const;
		jlong get(jint arg0) const;
		jlong get(jint arg0, jlong arg1) const;
		jint indexOfKey(jint arg0) const;
		jint indexOfValue(jlong arg0) const;
		jint keyAt(jint arg0) const;
		void put(jint arg0, jlong arg1) const;
		void removeAt(jint arg0) const;
		jint size() const;
		JString toString() const;
		jlong valueAt(jint arg0) const;
	};
} // namespace android::util

