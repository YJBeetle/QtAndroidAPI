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
		
		ConcurrentHashMap_KeySetView(QAndroidJniObject obj);
		// Constructors
		ConcurrentHashMap_KeySetView() = default;
		
		// Methods
		jboolean add(jobject arg0);
		jboolean addAll(__JniBaseClass arg0);
		jboolean contains(jobject arg0);
		jboolean equals(jobject arg0);
		void forEach(__JniBaseClass arg0);
		QAndroidJniObject getMap();
		jobject getMappedValue();
		jint hashCode();
		QAndroidJniObject iterator();
		jboolean remove(jobject arg0);
		jboolean removeAll(__JniBaseClass arg0);
		QAndroidJniObject spliterator();
	};
} // namespace java::util::concurrent

