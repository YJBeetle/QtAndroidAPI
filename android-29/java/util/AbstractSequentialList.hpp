#pragma once

#include "../../__JniBaseClass.hpp"
#include "./AbstractCollection.hpp"
#include "./AbstractList.hpp"


namespace java::util
{
	class AbstractSequentialList : public java::util::AbstractList
	{
	public:
		// Fields
		
		AbstractSequentialList(QAndroidJniObject obj);
		// Constructors
		AbstractSequentialList() = default;
		
		// Methods
		void add(jint arg0, jobject arg1);
		jboolean addAll(jint arg0, __JniBaseClass arg1);
		jobject get(jint arg0);
		QAndroidJniObject iterator();
		QAndroidJniObject listIterator(jint arg0);
		jobject remove(jint arg0);
		jobject set(jint arg0, jobject arg1);
	};
} // namespace java::util

