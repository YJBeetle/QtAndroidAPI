#pragma once

#include "../../JObject.hpp"


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
		jboolean add(jobject arg0);
		jboolean addAll(JObject arg0);
		void clear();
		jboolean contains(jobject arg0);
		jboolean containsAll(JObject arg0);
		jboolean isEmpty();
		JObject iterator();
		jboolean remove(jobject arg0);
		jboolean removeAll(JObject arg0);
		jboolean retainAll(JObject arg0);
		jint size();
		jobjectArray toArray();
		jobjectArray toArray(jobjectArray arg0);
		jstring toString();
	};
} // namespace java::util

