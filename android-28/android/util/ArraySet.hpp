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
		ArraySet(android::util::ArraySet &arg0);
		ArraySet(jint arg0);
		
		// Methods
		jboolean add(JObject arg0);
		jboolean addAll(JObject arg0);
		void addAll(android::util::ArraySet arg0);
		void clear();
		jboolean contains(JObject arg0);
		jboolean containsAll(JObject arg0);
		void ensureCapacity(jint arg0);
		jboolean equals(JObject arg0);
		jint hashCode();
		jint indexOf(JObject arg0);
		jboolean isEmpty();
		JObject iterator();
		jboolean remove(JObject arg0);
		jboolean removeAll(android::util::ArraySet arg0);
		jboolean removeAll(JObject arg0);
		JObject removeAt(jint arg0);
		jboolean retainAll(JObject arg0);
		jint size();
		JObjectArray toArray();
		JObjectArray toArray(JObjectArray arg0);
		JString toString();
		JObject valueAt(jint arg0);
	};
} // namespace android::util

