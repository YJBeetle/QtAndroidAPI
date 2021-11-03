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
		jboolean add(JObject arg0) const;
		jboolean addAll(JObject arg0) const;
		jboolean contains(JObject arg0) const;
		jboolean equals(JObject arg0) const;
		void forEach(JObject arg0) const;
		java::util::concurrent::ConcurrentHashMap getMap() const;
		JObject getMappedValue() const;
		jint hashCode() const;
		JObject iterator() const;
		jboolean remove(JObject arg0) const;
		jboolean removeAll(JObject arg0) const;
		JObject spliterator() const;
	};
} // namespace java::util::concurrent

