#pragma once

#include "../../JObject.hpp"

class JObjectArray;
class JObject;
class JString;

namespace java::util
{
	class AbstractCollection : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AbstractCollection(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AbstractCollection(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean add(JObject arg0) const;
		jboolean addAll(JObject arg0) const;
		void clear() const;
		jboolean contains(JObject arg0) const;
		jboolean containsAll(JObject arg0) const;
		jboolean isEmpty() const;
		JObject iterator() const;
		jboolean remove(JObject arg0) const;
		jboolean removeAll(JObject arg0) const;
		jboolean retainAll(JObject arg0) const;
		jint size() const;
		JObjectArray toArray() const;
		JObjectArray toArray(JObjectArray arg0) const;
		JString toString() const;
	};
} // namespace java::util

