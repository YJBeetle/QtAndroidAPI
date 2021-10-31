#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../AbstractCollection.hpp"
#include "../AbstractSet.hpp"

namespace java::util::concurrent
{
	class CopyOnWriteArrayList;
}

namespace java::util::concurrent
{
	class CopyOnWriteArraySet : public java::util::AbstractSet
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CopyOnWriteArraySet(const char *className, const char *sig, Ts...agv) : java::util::AbstractSet(className, sig, std::forward<Ts>(agv)...) {}
		CopyOnWriteArraySet(QAndroidJniObject obj);
		
		// Constructors
		CopyOnWriteArraySet();
		CopyOnWriteArraySet(__JniBaseClass arg0);
		
		// Methods
		jboolean add(jobject arg0);
		jboolean addAll(__JniBaseClass arg0);
		void clear();
		jboolean contains(jobject arg0);
		jboolean containsAll(__JniBaseClass arg0);
		jboolean equals(jobject arg0);
		void forEach(__JniBaseClass arg0);
		jboolean isEmpty();
		QAndroidJniObject iterator();
		jboolean remove(jobject arg0);
		jboolean removeAll(__JniBaseClass arg0);
		jboolean removeIf(__JniBaseClass arg0);
		jboolean retainAll(__JniBaseClass arg0);
		jint size();
		QAndroidJniObject spliterator();
		jobjectArray toArray();
		jobjectArray toArray(jobjectArray arg0);
	};
} // namespace java::util::concurrent

