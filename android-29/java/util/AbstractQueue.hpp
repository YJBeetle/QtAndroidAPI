#pragma once

#include "../../JObject.hpp"
#include "./AbstractCollection.hpp"


namespace java::util
{
	class AbstractQueue : public java::util::AbstractCollection
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AbstractQueue(const char *className, const char *sig, Ts...agv) : java::util::AbstractCollection(className, sig, std::forward<Ts>(agv)...) {}
		AbstractQueue(QJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean add(jobject arg0);
		jboolean addAll(JObject arg0);
		void clear();
		jobject element();
		jobject remove();
	};
} // namespace java::util

