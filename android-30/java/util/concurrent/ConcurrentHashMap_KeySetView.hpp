#pragma once

#include "../../../JObject.hpp"

namespace java::util::concurrent
{
	class ConcurrentHashMap;
}

namespace java::util::concurrent
{
	class ConcurrentHashMap_KeySetView : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ConcurrentHashMap_KeySetView(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ConcurrentHashMap_KeySetView(QJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean add(jobject arg0);
		jboolean addAll(JObject arg0);
		jboolean contains(jobject arg0);
		jboolean equals(jobject arg0);
		void forEach(JObject arg0);
		java::util::concurrent::ConcurrentHashMap getMap();
		jobject getMappedValue();
		jint hashCode();
		JObject iterator();
		jboolean remove(jobject arg0);
		jboolean removeAll(JObject arg0);
		JObject spliterator();
	};
} // namespace java::util::concurrent

