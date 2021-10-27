#pragma once

#include "../../__JniBaseClass.hpp"


namespace java::util
{
	class AbstractCollection : public __JniBaseClass
	{
	public:
		// Fields
		
		AbstractCollection(QAndroidJniObject obj);
		// Constructors
		AbstractCollection() = default;
		
		// Methods
		jboolean add(jobject arg0);
		jboolean addAll(__JniBaseClass arg0);
		void clear();
		jboolean contains(jobject arg0);
		jboolean containsAll(__JniBaseClass arg0);
		jboolean isEmpty();
		QAndroidJniObject iterator();
		jboolean remove(jobject arg0);
		jboolean removeAll(__JniBaseClass arg0);
		jboolean retainAll(__JniBaseClass arg0);
		jint size();
		jobjectArray toArray();
		jobjectArray toArray(jobjectArray arg0);
		jstring toString();
	};
} // namespace java::util

