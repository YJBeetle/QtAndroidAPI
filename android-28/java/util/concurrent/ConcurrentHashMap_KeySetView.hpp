#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::util::concurrent
{
	class ConcurrentHashMap;
}

namespace java::util::concurrent
{
	class ConcurrentHashMap_KeySetView : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ConcurrentHashMap_KeySetView(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ConcurrentHashMap_KeySetView(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean add(jobject arg0);
		jboolean addAll(__JniBaseClass arg0);
		jboolean contains(jobject arg0);
		jboolean equals(jobject arg0);
		void forEach(__JniBaseClass arg0);
		java::util::concurrent::ConcurrentHashMap getMap();
		jobject getMappedValue();
		jint hashCode();
		__JniBaseClass iterator();
		jboolean remove(jobject arg0);
		jboolean removeAll(__JniBaseClass arg0);
		__JniBaseClass spliterator();
	};
} // namespace java::util::concurrent

