#pragma once

#include "../../JObject.hpp"
#include "./AbstractCollection.hpp"
#include "./AbstractList.hpp"


namespace java::util
{
	class AbstractSequentialList : public java::util::AbstractList
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AbstractSequentialList(const char *className, const char *sig, Ts...agv) : java::util::AbstractList(className, sig, std::forward<Ts>(agv)...) {}
		AbstractSequentialList(QJniObject obj);
		
		// Constructors
		
		// Methods
		void add(jint arg0, jobject arg1);
		jboolean addAll(jint arg0, JObject arg1);
		jobject get(jint arg0);
		JObject iterator();
		JObject listIterator(jint arg0);
		jobject remove(jint arg0);
		jobject set(jint arg0, jobject arg1);
	};
} // namespace java::util

