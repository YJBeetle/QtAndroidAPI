#pragma once

#include "../../__JniBaseClass.hpp"
#include "./AbstractCollection.hpp"


namespace java::util
{
	class AbstractList : public java::util::AbstractCollection
	{
	public:
		// Fields
		
		AbstractList(QAndroidJniObject obj);
		// Constructors
		AbstractList() = default;
		
		// Methods
		jboolean add(jobject arg0);
		void add(jint arg0, jobject arg1);
		jboolean addAll(jint arg0, __JniBaseClass arg1);
		void clear();
		jboolean equals(jobject arg0);
		jobject get(jint arg0);
		jint hashCode();
		jint indexOf(jobject arg0);
		QAndroidJniObject iterator();
		jint lastIndexOf(jobject arg0);
		QAndroidJniObject listIterator();
		QAndroidJniObject listIterator(jint arg0);
		jobject remove(jint arg0);
		jobject set(jint arg0, jobject arg1);
		QAndroidJniObject subList(jint arg0, jint arg1);
	};
} // namespace java::util

