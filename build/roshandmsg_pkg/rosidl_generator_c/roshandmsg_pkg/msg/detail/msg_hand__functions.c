// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from roshandmsg_pkg:msg/MsgHand.idl
// generated code does not contain a copyright notice
#include "roshandmsg_pkg/msg/detail/msg_hand__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
roshandmsg_pkg__msg__MsgHand__init(roshandmsg_pkg__msg__MsgHand * msg)
{
  if (!msg) {
    return false;
  }
  // d1
  // d2
  // d3
  // d4
  // d5
  // s
  return true;
}

void
roshandmsg_pkg__msg__MsgHand__fini(roshandmsg_pkg__msg__MsgHand * msg)
{
  if (!msg) {
    return;
  }
  // d1
  // d2
  // d3
  // d4
  // d5
  // s
}

bool
roshandmsg_pkg__msg__MsgHand__are_equal(const roshandmsg_pkg__msg__MsgHand * lhs, const roshandmsg_pkg__msg__MsgHand * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // d1
  if (lhs->d1 != rhs->d1) {
    return false;
  }
  // d2
  if (lhs->d2 != rhs->d2) {
    return false;
  }
  // d3
  if (lhs->d3 != rhs->d3) {
    return false;
  }
  // d4
  if (lhs->d4 != rhs->d4) {
    return false;
  }
  // d5
  if (lhs->d5 != rhs->d5) {
    return false;
  }
  // s
  if (lhs->s != rhs->s) {
    return false;
  }
  return true;
}

bool
roshandmsg_pkg__msg__MsgHand__copy(
  const roshandmsg_pkg__msg__MsgHand * input,
  roshandmsg_pkg__msg__MsgHand * output)
{
  if (!input || !output) {
    return false;
  }
  // d1
  output->d1 = input->d1;
  // d2
  output->d2 = input->d2;
  // d3
  output->d3 = input->d3;
  // d4
  output->d4 = input->d4;
  // d5
  output->d5 = input->d5;
  // s
  output->s = input->s;
  return true;
}

roshandmsg_pkg__msg__MsgHand *
roshandmsg_pkg__msg__MsgHand__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  roshandmsg_pkg__msg__MsgHand * msg = (roshandmsg_pkg__msg__MsgHand *)allocator.allocate(sizeof(roshandmsg_pkg__msg__MsgHand), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(roshandmsg_pkg__msg__MsgHand));
  bool success = roshandmsg_pkg__msg__MsgHand__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
roshandmsg_pkg__msg__MsgHand__destroy(roshandmsg_pkg__msg__MsgHand * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    roshandmsg_pkg__msg__MsgHand__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
roshandmsg_pkg__msg__MsgHand__Sequence__init(roshandmsg_pkg__msg__MsgHand__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  roshandmsg_pkg__msg__MsgHand * data = NULL;

  if (size) {
    data = (roshandmsg_pkg__msg__MsgHand *)allocator.zero_allocate(size, sizeof(roshandmsg_pkg__msg__MsgHand), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = roshandmsg_pkg__msg__MsgHand__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        roshandmsg_pkg__msg__MsgHand__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
roshandmsg_pkg__msg__MsgHand__Sequence__fini(roshandmsg_pkg__msg__MsgHand__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      roshandmsg_pkg__msg__MsgHand__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

roshandmsg_pkg__msg__MsgHand__Sequence *
roshandmsg_pkg__msg__MsgHand__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  roshandmsg_pkg__msg__MsgHand__Sequence * array = (roshandmsg_pkg__msg__MsgHand__Sequence *)allocator.allocate(sizeof(roshandmsg_pkg__msg__MsgHand__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = roshandmsg_pkg__msg__MsgHand__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
roshandmsg_pkg__msg__MsgHand__Sequence__destroy(roshandmsg_pkg__msg__MsgHand__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    roshandmsg_pkg__msg__MsgHand__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
roshandmsg_pkg__msg__MsgHand__Sequence__are_equal(const roshandmsg_pkg__msg__MsgHand__Sequence * lhs, const roshandmsg_pkg__msg__MsgHand__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!roshandmsg_pkg__msg__MsgHand__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
roshandmsg_pkg__msg__MsgHand__Sequence__copy(
  const roshandmsg_pkg__msg__MsgHand__Sequence * input,
  roshandmsg_pkg__msg__MsgHand__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(roshandmsg_pkg__msg__MsgHand);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    roshandmsg_pkg__msg__MsgHand * data =
      (roshandmsg_pkg__msg__MsgHand *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!roshandmsg_pkg__msg__MsgHand__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          roshandmsg_pkg__msg__MsgHand__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!roshandmsg_pkg__msg__MsgHand__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
