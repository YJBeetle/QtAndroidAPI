#pragma once


class JObject;
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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ConcurrentHashMap_KeySetView(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ConcurrentHashMap_KeySetView(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean add(JObject arg0);
		jboolean addAll(JObject arg0);
		jboolean contains(JObject arg0);
		jboolean equals(JObject arg0);
		void forEach(JObject arg0);
		java::util::concurrent::ConcurrentHashMap getMap();
		JObject getMappedValue();
		jint hashCode();
		JObject iterator();
		jboolean remove(JObject arg0);
		jboolean removeAll(JObject arg0);
		JObject spliterator();
	};
} // namespace java::util::concurrent

