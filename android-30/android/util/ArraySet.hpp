#pragma once

#include "../../JObject.hpp"

class JObjectArray;
class JObject;
class JString;

namespace android::util
{
	class ArraySet : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ArraySet(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ArraySet(QJniObject obj);
		
		// Constructors
		ArraySet();
		ArraySet(JObjectArray arg0);
		ArraySet(android::util::ArraySet &arg0);
		ArraySet(jint arg0);
		ArraySet(JObject arg0);
		
		// Methods
		jboolean add(JObject arg0) const;
		jboolean addAll(JObject arg0) const;
		void addAll(android::util::ArraySet arg0) const;
		void clear() const;
		jboolean contains(JObject arg0) const;
		jboolean containsAll(JObject arg0) const;
		void ensureCapacity(jint arg0) const;
		jboolean equals(JObject arg0) const;
		jint hashCode() const;
		jint indexOf(JObject arg0) const;
		jboolean isEmpty() const;
		JObject iterator() const;
		jboolean remove(JObject arg0) const;
		jboolean removeAll(android::util::ArraySet arg0) const;
		jboolean removeAll(JObject arg0) const;
		JObject removeAt(jint arg0) const;
		jboolean removeIf(JObject arg0) const;
		jboolean retainAll(JObject arg0) const;
		jint size() const;
		JObjectArray toArray() const;
		JObjectArray toArray(JObjectArray arg0) const;
		JString toString() const;
		JObject valueAt(jint arg0) const;
	};
} // namespace android::util

