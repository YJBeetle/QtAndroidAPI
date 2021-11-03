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
		
		// QJniObject forward
		template<typename ...Ts> explicit AbstractCollection(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AbstractCollection(QJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean add(JObject arg0);
		jboolean addAll(JObject arg0);
		void clear();
		jboolean contains(JObject arg0);
		jboolean containsAll(JObject arg0);
		jboolean isEmpty();
		JObject iterator();
		jboolean remove(JObject arg0);
		jboolean removeAll(JObject arg0);
		jboolean retainAll(JObject arg0);
		jint size();
		JObjectArray toArray();
		JObjectArray toArray(JObjectArray arg0);
		JString toString();
	};
} // namespace java::util

